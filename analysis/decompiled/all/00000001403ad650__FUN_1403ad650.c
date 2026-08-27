// Function: FUN_1403ad650
// Addr: 1403ad650
// Size: 466 bytes


byte FUN_1403ad650(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  bVar14 = 0;
  do {
    uVar8 = 0;
    uVar7 = *(uint *)(*(longlong *)(lVar4 + 0x70) + (ulonglong)*(uint *)(lVar4 + 0x5c) * 0x14);
    lVar2 = *(longlong *)(lVar4 + 0x70) + (ulonglong)*(uint *)(lVar4 + 0x5c) * 0x14;
    do {
      if ((*(ulonglong *)(param_2 + uVar8 * 8) >>
           (uVar7 >> ((byte)(&DAT_14045c3c8)[uVar8] & 0x1f) & 0x3f) & 1) == 0) goto LAB_1403ad803;
      uVar12 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar12;
    } while (uVar12 < 3);
    if ((*(uint *)(param_1 + 0x11c) & *(uint *)(lVar2 + 4)) != 0) {
      uVar3 = *(ushort *)(lVar2 + 0xc);
      uVar12 = *(uint *)(param_1 + 0x124);
      if ((uVar3 & uVar12 & 0xe) == 0) {
        if ((uVar3 & 8) != 0) {
          if ((uVar12 & 0x10) == 0) {
            if ((uVar12 & 0xff00) == 0) goto LAB_1403ad785;
            bVar15 = (uVar12 & 0xff00) == (uVar3 & 0xff00);
          }
          else {
            uVar8 = 0;
            do {
              if ((*(ulonglong *)
                    ((*(undefined8 **)(param_1 + 0xf8))[2] + (ulonglong)(uVar12 >> 0x10) * 0x18 +
                    uVar8 * 8) >> (uVar7 >> ((byte)(&DAT_14045c3c8)[uVar8] & 0x1f) & 0x3f) & 1) == 0
                 ) goto LAB_1403ad76c;
              uVar13 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar13;
            } while (uVar13 < 3);
            puVar10 = (undefined8 *)**(undefined8 **)(param_1 + 0xf8);
            puVar9 = &DAT_14045dd10;
            if (puVar10 != (undefined8 *)0x0) {
              puVar9 = puVar10;
            }
            if (*(uint *)(puVar9 + 3) < 4) {
              puVar10 = &DAT_14045dd10;
            }
            else {
              puVar10 = (undefined8 *)puVar9[2];
            }
            cVar5 = FUN_1403ebf20(puVar10,uVar12 >> 0x10);
            if (cVar5 == '\0') {
LAB_1403ad76c:
              bVar15 = false;
            }
            else {
LAB_1403ad785:
              bVar15 = true;
            }
          }
          if (!bVar15) goto LAB_1403ad803;
        }
        *(longlong *)(param_1 + 0x100) = param_2;
        puVar10 = (undefined8 *)(param_2 + 0x20);
        for (iVar11 = *(int *)(param_2 + 0x18); iVar11 != 0; iVar11 = iVar11 + -1) {
          uVar8 = 0;
          do {
            if (((ulonglong)puVar10[uVar8 + 5] >>
                 (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70) +
                           (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c) * 0x14) >>
                  ((byte)(&DAT_14045c3c8)[uVar8] & 0x1f) & 0x3f) & 1) == 0) goto LAB_1403ad7f2;
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while (uVar7 < 3);
          cVar5 = (*(code *)puVar10[1])(*puVar10,param_1);
          if (cVar5 != '\0') {
            bVar6 = 1;
            goto LAB_1403ad800;
          }
LAB_1403ad7f2:
          puVar10 = puVar10 + 8;
        }
        bVar6 = 0;
LAB_1403ad800:
        bVar14 = bVar14 | bVar6;
      }
    }
LAB_1403ad803:
    piVar1 = (int *)(lVar4 + 0x5c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      return bVar14;
    }
  } while( true );
}

