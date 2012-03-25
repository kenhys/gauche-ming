;; -*- mode:scheme; coding:utf-8 -*-

(use gauche.interactive)
(use gauche.sequence)
(use gauche.collection)

(use ming)

;; see http://www.opaque.net/ming/examples/example.php?name=action

(define (main args)
  (let* ((s (make <swf-shape>))
	 (fill (add-fill s 255 0 0))
	 (p (make <swf-sprite>))
	 (f3 (add-fill s 255 255 0))
	 (f4 (add-fill s 0 255 0))
	 (f5 (add-fill s 0 0 255))
	 (font (new-swf-font-from-file "test/font/VLGothic.fdb"))
	 (m (make <swf-movie>))
	 (i 0))

    (right-fill! s fill)

    (move-pen-to s -25 -25)
    (draw-line-to s 25 -25)
    (draw-line-to s 25 25)
    (draw-line-to s -25 25)
    (draw-line-to s -25 -25)

    (set! i (add p s))
    (depth! i 1)
    (next-frame p)
    
    (dotimes (n 5)
      (rotate i -15)
      (next-frame p))

    (background! m 255 255 255)
    (dimension! m 320 240)

    (set! i (add m p))
    (depth! i 1)
    (move-to i -50 120)
    (name! i "box")

    (add m (make <swf-action>))
    (next-frame m)
    (add m (make <swf-action>))
    (next-frame m)

    (save movie "action.swf")
    0))
