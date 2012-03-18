;;;
;;; ming.swfshape
;;;

(define-module ming.swftext
  (extend ming)
  (export-all)
  )
(select-module ming.swftext)

;; Loads extension
(dynamic-load "gauche--ming" :init-function "Scm_Init_gauche_ming")

;;
;; Put your Scheme definitions here


;;
;; swf-text
;;
(define-method desroy!
  ((self <swf-text>))
  (destroy-swf-text self))

(define-method font!
  ((self <swf-text>) (font <swf-font>))
  (swf-text-set-font self font))

(define-method height!
  ((self <swf-text>) height)
  (swf-text-set-height self height))

(define-method color!
  ((self <swf-text>) r g b :optional (a 1.0))
  (swf-text-set-color self r g b a))

(define-method move-to
  ((self <swf-text>) x y)
  (swf-text-move-to self x y))

(define-method add-string
  ((self <swf-text>) string)
  (swf-text-add-string self string))

(define-method add-utf8-string
  ((self <swf-text>) string)
  (swf-text-add-utf8-string self string))

(define-method add-wide-string
  ((self <swf-text>) string)
  (swf-text-add-wide-string self string))

(define-method add-wide-string
  ((self <swf-text>) string)
  (swf-text-add-wide-string self string))

(define-method spacing!
  ((self <swf-text>) spacing)
  (swf-text-set-spacing self spacing))

(define-method string-width
  ((self <swf-text>) string)
  (swf-text-get-string-width self string))

(define-method utf8-string-width
  ((self <swf-text>) string)
  (swf-text-get-utf8-string-width self string))

(define-method wide-string-width
  ((self <swf-text>) string)
  (swf-text-get-wide-string-width self string))

(define-method ascent
  ((self <swf-text>))
  (swf-text-get-ascent self))

(define-method descent
  ((self <swf-text>))
  (swf-text-get-descent self))

(define-method leading
  ((self <swf-text>))
  (swf-text-get-leading self))


;;
;; Epilogue
(provide "ming/swftext")

