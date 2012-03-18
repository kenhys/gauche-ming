;;;
;;; ming.swfshape
;;;

(define-module ming.swfshape
  (extend ming)
  (export-all)
  )
(select-module ming.swfshape)

;; Loads extension
(dynamic-load "gauche--ming" :init-function "Scm_Init_gauche_ming")

;;
;; Put your Scheme definitions here

(define-method destroy! ((self <swf-shape>))
  (destroy-swf-shape self))

(define-method end ((self <swf-shape>))
  (swf-shape-end self))

(define-method use-version ((self <swf-shape>) ver)
  (swf-shape-use-version self ver))

(define-method render-hinting-flags! ((self <swf-shape>) flags)
  (swf-shape-set-render-hinting-flags self flags))

(define-method move-pen-to ((self <swf-shape>) x y)
  (swf-shape-move-pen-to self x y))

(define-method move-pen ((self <swf-shape>) x y)
  (swf-shape-move-pen self x y))

(define-method pen-x ((self <swf-shape>))
  (swf-shape-get-pen-x self))

(define-method pen-y ((self <swf-shape>))
  (swf-shape-get-pen-y self))

(define-method draw-line-to ((self <swf-shape>) x y)
  (swf-shape-draw-line-to self x y))

(define-method draw-line ((self <swf-shape>) x y)
  (swf-shape-draw-line self x y))

(define-method draw-curve-to ((self <swf-shape>) ctlx ctly anchx anchy)
  (swf-shape-draw-curve-to self ctlx ctly anchx anchy))

(define-method draw-curve ((self <swf-shape>) ctlx ctly anchx anchy)
  (swf-shape-draw-curve self ctlx ctly anchx anchy))

(define-method hide-line ((self <swf-shape>))
  (swf-shape-lide-line self))

;; shape_util.h
(define-method line!
  ((self <swf-shape>) width r g b :optional (a 255))
  (swf-shape-set-line self width r g b a))

(define-method line2-filled
  ((self <swf-shape>) width (fill <swf-fill-style>) flags miterLimit)
  (swf-shape-set-line2-filled shape width fill flags miterLimit))

(define-method line2!
  ((self <swf-shape>) width r g b a flags miterLimit)
  (swf-shape-set-line2-filled shape width r g b a flags miterLimit))

(define-method add-solid-fill-style
  ((self <swf-shape>) r g b :optional (a 255))
  (swf-shape-add-solid-fill-style self r g b a))

(define-method add-gradient-fill-style
  ((self <swf-shape>) (gradient <swf-gradient>) flags)
  (swf-shape-add-gradient-fill-style shape gradient flags))

(define-method add-bitmap-fill-style
  ((self <swf-shape>) (bitmap <swf-bitmap>) flags)
  (swf-shape-add-bitmap-fill-style shape bitmap flags))

(define-method left-fill!
  ((self <swf-shape>) (fill <swf-fill-style>))
  (swf-shape-set-left-fill self fill))

(define-method right-fill!
  ((self <swf-shape>) (fill <swf-fill-style>))
  (swf-shape-set-right-fill self fill))


;;
;; Epilogue
(provide "ming/swfshape")

