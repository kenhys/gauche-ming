;;;
;;; gauche_ming
;;;

(define-module ming
  (export test-gauche_ming)
  )
(select-module ming)

;; Loads extension
(dynamic-load "gauche--ming" :init-function "Scm_Init_gauche_ming")

;;
;; Put your Scheme definitions here
;;



