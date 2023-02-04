(defn random-line [file-path]
  (let [lines (with-open [rdr (clojure.java.io/reader file-path)]
              (doall (line-seq rdr)))]
    (nth lines (int (rand (count lines))))))

(println (random-line "vocab.txt"))
