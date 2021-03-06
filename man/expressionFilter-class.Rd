\name{expressionFilter-class}
\docType{class}
\alias{expressionFilter-class}
\alias{expressionFilter}
\alias{show,expressionFilter-method}
\alias{char2ExpressionFilter}


\title{Class "expressionFilter"}


\description{

  A \code{\link{filter}} holding an expression that can be
  evaluated to a logical vector or a vector of factors.

}


\section{Extends}{
  
  Class \code{"\linkS4class{concreteFilter}"}, directly.

  Class \code{"\linkS4class{filter}"}, by class
  \code{concreteFilter}, distance 2.

}


\section{Slots}{
  \describe{
    
    \item{\code{expr}:}{The expression that will be evaluated in the
      context of the flow cytometry values.}
    
    \item{\code{args}:}{An environment providing additional parameters.}

    \item{\code{deparse}:}{A character scalar of the deparsed expression.}
    
    \item{\code{filterId}:}{The identifier of the filter}
    
  }
}


\section{Objects from the Class}{
  
  Objects can be created by calls of the form
  \code{new("expressionFilter", ...)}, using the
  \code{\link{expressionFilter}} constructor or, programmatically, from a
  character string using the \code{char2ExpressionFilter} function.

}

\usage{

expressionFilter(expr, ..., filterId="defaultExpressionFilter")
char2ExpressionFilter(expr, ..., filterId="defaultExpressionFilter")

}

\arguments{

  \item{filterId}{ An optional parameter that sets the \code{filterId}
    of this \code{\link{filter}}. The object can later be identified by
    this name.}
  
  \item{expr}{A valid R expression or a character vector that can be
    parsed into an expression. }

  \item{\dots}{ Additional arguments that are passed to the evaluation
    environment of the expression. }
  
}


\value{
  
  Returns a \code{expressionFilter} object for use in filtering
  \code{\link{flowFrame}}s or other flow cytometry objects.
  
}


\section{Methods}{
  \describe{
    
    \item{\%in\%}{\code{signature(x = "flowFrame", table =
	"expressionFilter")}: The workhorse used to evaluate the gate on
	data. This is usually not called directly by the user, but
	internally by calls to the \code{\link{filter}} methods. }
    
    \item{show}{\code{signature(object = "expressionFilter")}: Print
      information about the gate. }
    
  }
}

\details{
  
  The expression is evaluated in the environment of the flow cytometry
  values, hence the parameters of a \code{\link{flowFrame}} can be
  accessed through regular R symbols. The convenience function
  \code{char2ExpressionFilter} exists to programmatically construct
  expressions.
  
}


\author{F. Hahne, B. Ellis}

\seealso{

  \code{\link{flowFrame}}, \code{\link{filter}} for evaluation of
  \code{sampleFilters} and \code{\link{split}} and
  \code{\link{Subset}}for splitting and subsetting of flow cytometry
  data sets based on that.
  
}

\examples{

## Loading example data
dat <- read.FCS(system.file("extdata","0877408774.B08",
package="flowCore"))

#Create the filter
ef <- expressionFilter(`FSC-H` > 200, filterId="myExpressionFilter")
ef

## Filtering using sampeFilters
fres <- filter(dat, ef)
fres
summary(fres)

## The result of sample filtering is a logical subset
newDat <- Subset(dat, fres)
all(exprs(newDat)[,"FSC-H"] > 200)

## We can also split, in which case we get those events in and those
## not in the gate as separate populations
split(dat, fres)

## Programmatically construct an expression
dat <- dat[,-8]
r <- range(dat)
cn <- paste("`", colnames(dat), "`", sep="")
exp <- paste(cn, ">", r[1,], "&", cn, "<", r[2,], collapse=" & ")
ef2 <- char2ExpressionFilter(exp, filterId="myExpressionFilter")
ef2
fres2 <- filter(dat, ef2)
fres2
summary(fres2)

}


\keyword{methods}
\keyword{classes}


\keyword{classes}
