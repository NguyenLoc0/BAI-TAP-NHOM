he_co_so = int(input("Nhap he so so: "))
co_so = int(input(f"Nhap co so (he {he_co_so}): "))
he_co_so_sau_khi_doi = int(input("Nhap he co so muon doi: "))
co_so_sau_khi_doi = ""
chia_lay_du = []
chia_lay_nguyen = []

chia_lay_nguyen.append(str(co_so))

so_du = co_so % he_co_so_sau_khi_doi
so_nguyen = co_so // he_co_so_sau_khi_doi
chia_lay_du.append(so_du)
chia_lay_nguyen.append(so_nguyen)
while so_du != 0:
    so_nguyen = chia_lay_nguyen[len(chia_lay_nguyen)] // he_co_so_sau_khi_doi
    so_du = chia_lay_nguyen[len(chia_lay_nguyen)] % he_co_so_sau_khi_doi
    chia_lay_nguyen.append(so_nguyen)
    chia_lay_du.append(so_du)

for i in chia_lay_du:
    co_so_sau_khi_doi+=str(i)

co_so_sau_khi_doi=co_so_sau_khi_doi[::-1]

print(f"""
{co_so} (he {he_co_so} = {co_so_sau_khi_doi} (he {he_co_so_sau_khi_doi}))
      """)