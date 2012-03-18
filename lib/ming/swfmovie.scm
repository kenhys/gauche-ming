;;;
;;; ming.swfmovie
;;;

(define-module ming.swfmovie
  (extend ming)
  (export-all)
  )
(select-module ming.swfmovie)

;; Loads extension
(dynamic-load "gauche--ming" :init-function "Scm_Init_gauche_ming")

;;
;; Put your Scheme definitions here

(define-method write-exports ((self <swf-movie>))
  (swf-movie-write-exports self))

(define-method destroy! ((self <swf-movie>))
  (destroy-swf-movie self))

(define-method rate! ((self <swf-movie>) rate)
  (swf-movie-set-rate self rate))

(define-method rate ((self <swf-movie>))
  (swf-movie-get-rate self))

(define-method dimension! ((self <swf-movie>) x y)
  (swf-movie-set-dimension self x y))

(define-method number-of-frames! ((self <swf-movie>) frames)
  (swf-movie-set-number-of-frames self frames))

(define-method background! 
  ((self <swf-movie>) r g b)
  (swf-movie-set-background self r g b))

(define-method add-internal
  ((self <swf-movie>) ublock)
  (swf-movie-add-internal self ublock))

(define-method add
  ((self <swf-movie>) ublock)
  (swf-movie-add self ublock))

(define-method next-frame ((self <swf-movie>))
  (swf-movie-next-frame self))

(define-method label-frame ((self <swf-movie>) label)
  (swf-movie-label-frame self label))

(define-method name-anchor ((self <swf-movie>) label)
  (swf-movie-name-anchor self label))

(define-method save ((self <swf-movie>) filename)
  (swf-movie-save self filename))

;;
;; Epilogue
(provide "ming/swfmovie")

