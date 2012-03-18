;; -*- mode:scheme; coding:utf-8 -*-

(use gauche.interactive)
(use gauche.sequence)
(use gauche.collection)

(use ming)

;; see http://www.opaque.net/ming/examples/example.php?name=shape

(define (main args)
  (let* ((s (make <swf-shape>))
	 (m (make <swf-movie>)))

    (line! s 4 127 0 0)
    (right-fill! s (add-solid-fill-style s 255 0 0))
    (move-pen-to s 10 10)
    (draw-line-to s 310 10)
    (draw-line-to s 310 230)
    (draw-curve-to s 10 230 10 10)

    (dimension! m 320 240)
    (rate! m 12.0)
    (add m s)
    (next-frame m)

    (save m "shape.swf")
    0))
