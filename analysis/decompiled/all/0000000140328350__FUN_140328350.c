// Function: FUN_140328350
// Addr: 140328350
// Size: 1147 bytes


void FUN_140328350(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  int local_res10;
  
  puVar4 = *(undefined8 **)(param_1 + 0x2a0);
  uVar5 = param_2[4];
  pbVar6 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar6) {
    bVar3 = *(byte *)*param_2;
    if (bVar3 - 0x30 < 10) {
      iVar9 = (*(code *)param_2[9])(param_2);
      *(int *)(param_2 + 0x21) = iVar9;
      if (*(int *)(param_2 + 3) != 0) {
        return;
      }
      if (-1 < iVar9) {
        pbVar15 = (byte *)*param_2;
        lVar12 = (longlong)pbVar6 - (longlong)pbVar15 >> 2;
        if (lVar12 < iVar9) {
          *(int *)(param_2 + 0x21) = (int)lVar12;
        }
LAB_140328441:
        if ((pbVar15 < pbVar6) && (puVar1 = param_2 + 0x38, *(int *)(param_2 + 0x3b) == 0)) {
          iVar9 = (**(code **)*puVar4)(param_2 + 0x2d,*(undefined4 *)(param_2 + 0x21),uVar5);
          if ((iVar9 != 0) ||
             ((iVar9 = (**(code **)*puVar4)(param_2 + 0x22,*(undefined4 *)(param_2 + 0x21),uVar5),
              iVar9 != 0 || (iVar9 = (**(code **)*puVar4)(puVar1,4,uVar5), iVar9 != 0))))
          goto LAB_140328420;
          local_res10 = 0;
          iVar16 = 0;
          bVar7 = false;
          (*(code *)param_2[7])();
          pbVar15 = (byte *)*param_2;
          iVar9 = 0;
          iVar8 = local_res10;
          while (local_res10 = iVar9, pbVar15 < pbVar6) {
            if (*pbVar15 == 0x65) {
              if ((((pbVar15 + 3 < pbVar6) && (pbVar15[1] == 0x6e)) && (pbVar15[2] == 100)) &&
                 ((bVar3 = pbVar15[3], bVar3 < 0x21 &&
                  ((0x100003601U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)))) break;
            }
            else if (*pbVar15 == 0x3e) break;
            (*(code *)param_2[8])(param_2);
            if (pbVar6 <= (byte *)*param_2) goto LAB_14032841b;
            if (*(int *)(param_2 + 3) != 0) {
              return;
            }
            bVar3 = *pbVar15;
            if ((bVar3 == 0x2f) || (iVar9 = local_res10, local_res10 = iVar8, bVar3 == 0x28)) {
              if (pbVar6 <= pbVar15 + (ulonglong)(bVar3 == 0x28) + 2) goto LAB_14032841b;
              pbVar15 = pbVar15 + 1;
              uVar11 = (int)(byte *)*param_2 - (int)pbVar15;
              uVar14 = uVar11 - 1;
              if (bVar3 != 0x28) {
                uVar14 = uVar11;
              }
              iVar9 = (*(code *)param_2[0x2b])(param_2 + 0x22,iVar16,pbVar15,uVar14 + 1);
              if (iVar9 != 0) goto LAB_140328420;
              lVar12 = (longlong)iVar16 * 8;
              *(undefined1 *)((ulonglong)uVar14 + *(longlong *)(param_2[0x26] + lVar12)) = 0;
              local_res10 = iVar8;
              if (*pbVar15 == 0x2e) {
                lVar13 = 0;
                do {
                  pcVar2 = ".notdef" + lVar13;
                  lVar13 = lVar13 + 1;
                  if (*pcVar2 != *(char *)(*(longlong *)(param_2[0x26] + lVar12) + -1 + lVar13))
                  goto LAB_1403285de;
                } while (lVar13 != 8);
                bVar7 = true;
                local_res10 = iVar16;
              }
LAB_1403285de:
              (*(code *)param_2[7])(param_2);
              if (bVar3 == 0x28) {
                (*(code *)param_2[8])(param_2);
              }
              uVar5 = *param_2;
              (*(code *)param_2[9])(param_2);
              if (pbVar6 <= (byte *)*param_2) goto LAB_14032841b;
              uVar14 = (int)(byte *)*param_2 - (int)uVar5;
              iVar9 = (*(code *)param_2[0x36])(param_2 + 0x2d,iVar16,uVar5,uVar14 + 1);
              if (iVar9 != 0) goto LAB_140328420;
              iVar16 = iVar16 + 1;
              *(undefined1 *)((ulonglong)uVar14 + *(longlong *)(param_2[0x31] + lVar12)) = 0;
              iVar9 = local_res10;
              if (*(int *)(param_2 + 0x21) <= iVar16) break;
            }
            (*(code *)param_2[7])();
            iVar8 = local_res10;
            pbVar15 = (byte *)*param_2;
          }
          *(int *)(param_2 + 0x21) = iVar16;
          if (bVar7) {
            lVar12 = 0;
            while (pcVar2 = ".notdef" + lVar12, lVar12 = lVar12 + 1,
                  *pcVar2 == *(char *)(*(longlong *)param_2[0x26] + -1 + lVar12)) {
              if (lVar12 == 8) {
                return;
              }
            }
            iVar9 = (*(code *)param_2[0x41])
                              (puVar1,0,*(longlong *)param_2[0x26],*(undefined4 *)param_2[0x27]);
            if ((iVar9 == 0) &&
               (iVar9 = (*(code *)param_2[0x41])
                                  (puVar1,1,*(undefined8 *)param_2[0x31],
                                   *(undefined4 *)param_2[0x32]), iVar9 == 0)) {
              lVar12 = (longlong)local_res10 * 4;
              lVar13 = (longlong)local_res10 * 8;
              iVar9 = (*(code *)param_2[0x41])
                                (puVar1,2,*(undefined8 *)(param_2[0x26] + lVar13),
                                 *(undefined4 *)(param_2[0x27] + lVar12));
              if ((iVar9 == 0) &&
                 ((((iVar9 = (*(code *)param_2[0x41])
                                       (puVar1,3,*(undefined8 *)(param_2[0x31] + lVar13),
                                        *(undefined4 *)(param_2[0x32] + lVar12)), iVar9 == 0 &&
                    (iVar9 = (*(code *)param_2[0x2b])
                                       (param_2 + 0x22,local_res10,*(undefined8 *)param_2[0x3c],
                                        *(undefined4 *)param_2[0x3d]), iVar9 == 0)) &&
                   (iVar9 = (*(code *)param_2[0x36])
                                      (param_2 + 0x2d,local_res10,*(undefined8 *)(param_2[0x3c] + 8)
                                       ,*(undefined4 *)(param_2[0x3d] + 4)), iVar9 == 0)) &&
                  ((iVar9 = (*(code *)param_2[0x2b])
                                      (param_2 + 0x22,0,*(undefined8 *)(param_2[0x3c] + 0x10),
                                       *(undefined4 *)(param_2[0x3d] + 8)), iVar9 == 0 &&
                   (iVar9 = (*(code *)param_2[0x36])
                                      (param_2 + 0x2d,0,*(undefined8 *)(param_2[0x3c] + 0x18),
                                       *(undefined4 *)(param_2[0x3d] + 0xc)), iVar9 == 0)))))) {
                return;
              }
            }
            goto LAB_140328420;
          }
        }
      }
    }
    else if (bVar3 == 0x3c) {
      (*(code *)param_2[8])(param_2);
      if (*(int *)(param_2 + 3) != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pbVar15 = (byte *)*param_2;
      if (pbVar15 < pbVar6) {
        iVar9 = 0;
        pbVar10 = pbVar15;
        do {
          if (*pbVar10 == 0x2f) {
            iVar9 = iVar9 + 1;
          }
          else if (*pbVar10 == 0x3e) {
            *(int *)(param_2 + 0x21) = iVar9;
            *param_2 = pbVar15;
            goto LAB_140328441;
          }
          (*(code *)param_2[8])(param_2);
          if (*(int *)(param_2 + 3) != 0) {
            return;
          }
          (*(code *)param_2[7])(param_2);
          pbVar10 = (byte *)*param_2;
        } while (pbVar10 < pbVar6);
      }
    }
  }
LAB_14032841b:
  iVar9 = 3;
LAB_140328420:
  *(int *)(param_2 + 3) = iVar9;
  return;
}

