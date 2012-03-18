;;;
;;; gauche_ming
;;;

(define-module ming
  (extend 
   ming.swffont
   ming.swfmovie
   ming.swfshape
   ming.swftext
   )
  (export-all))
(select-module ming)

;; Loads extension
(dynamic-load "gauche--ming" :init-function "Scm_Init_gauche_ming")

;;
;; Put your Scheme definitions here
;;



