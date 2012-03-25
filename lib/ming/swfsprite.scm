;;;
;;; ming.swfsprite
;;;

(define-module ming.swfsprite
  (extend ming)
  (export-all)
  )
(select-module ming.swfsprite)

;; Loads extension
(dynamic-load "gauche--ming" :init-function "Scm_Init_gauche_ming")

;;
;; Put your Scheme definitions here

(define-method destroy! ((self <swf-sprite>))
  (destroy-swf-sprite self))

(define-method add
  ((self <swf-shape>) block)
  (swf-sprite-add-block self block))

;;
;; Epilogue
(provide "ming/swfsprite")

