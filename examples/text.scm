;; -*- mode:scheme; coding:utf-8 -*-

(use gauche.interactive)
(use gauche.sequence)
(use gauche.collection)

(use ming)

;; see http://www.opaque.net/ming/examples/example.php?name=text

(define (main args)
  (let* ((font (new-swf-font-from-file "test/font/VLGothic.fdb"))
	 (text (make <swf-text>))
	 (movie (make <swf-movie>))
	 (item 0))

    (font! text font)
    (color! text 255 255 0)
    (height! text 60)
    (add-string text "fnar! fnar!")

    (dimension! movie 320 240)
    (set! item (add movie text))
    (d item)
    ;;(move-to item (- 160 (/ (string-width text "fnar! fnar!") 2)) (+ 120 (/ (ascent text) 2)))
    
    (save movie "text.swf")
    0))
