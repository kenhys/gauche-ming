;;;
;;; ming.swfmovie
;;;

(define-module ming.swfmovie
  (extend ming)
  (export-all)
  )
(select-module ming.swfmovie)

;; Loads extension
(dynamic-load "gauche--ming")

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


;;
;; Epilogue
(provide "ming/swfmovie")

