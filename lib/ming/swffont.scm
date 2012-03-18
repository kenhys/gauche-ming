;;;
;;; ming.swfshape
;;;

(define-module ming.swffont
  (extend ming)
  (export-all)
  )
(select-module ming.swffont)

;; Loads extension
(dynamic-load "gauche--ming" :init-function "Scm_Init_gauche_ming")

;;
;; Put your Scheme definitions here


;;
;; swf-font
;;
(define-method desroy!
  ((self <swf-font>))
  (destroy-swf-font self))

(define-method ascent
  ((self <swf-font>))
  (swf-font-get-ascent self))

(define-method descent
  ((self <swf-font>))
  (swf-font-get-descent self))

(define-method leading
  ((self <swf-font>))
  (swf-font-get-leading self))

;;
;; Epilogue
(provide "ming/swffont")

