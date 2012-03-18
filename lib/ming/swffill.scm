;;;
;;; ming.swfshape
;;;

(define-module ming.swffill
  (extend ming)
  (export-all)
  )
(select-module ming.swfshape)

;; Loads extension
(dynamic-load "gauche--ming" :init-function "Scm_Init_gauche_ming")

;;
;; Put your Scheme definitions here


;;
;; swf-fill-style
;;
(define new-fill-style
  (r g b :optional (a 0))
  (new-swf-solid-fill-style r g b a))

(define-method new-fill-style
  ((self <swf-gradient>) radial)
  (new-swf-gradient-fill-style self radial))

(define-method new-fill-style
  ((self <swf-character>) flags)
  (new-swf-bitmap-fill-style self flags))

(define-method matrix
  ((self <swf-fill-style>))
  (swf-fill-style-get-matrix self))

(define-method destroy!
  ((self <swf-fill-style>))
  (destroy-swf-fill-style self))

;;
;; Epilogue
(provide "ming/swfshape")

