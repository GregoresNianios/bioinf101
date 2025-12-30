kod_en = "ATG"
kod_tel = ["TAA", "TGA", "TAG"]

seq = input("Δώσε αλληλουχια για έλεγχο:")

start_al = seq.find(kod_en)

if start_al == -1:
    print("Δεν βρέθηκε κωδικόνιο έναρξης, μπουμπύνα")
else:
    found_stop = False
    stop = None

    for i in range(start_al + 3, len(seq), 3):
        tripleta = seq[i:i + 3]

        if len(tripleta) < 3:
            break

        if tripleta in kod_tel:
            found_stop = True
            stop_al = i + 3
            break

    if found_stop:
        kodik_al = seq[start_al:stop_al]
        print("Η αλληλουχια είναι: ")
        print(kodik_al)
    else:
        print("Δεν υπάρχει σωστή αλληλουχία, μπουμπούνα")
