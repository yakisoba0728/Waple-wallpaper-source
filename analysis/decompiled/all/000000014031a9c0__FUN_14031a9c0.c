// Function: FUN_14031a9c0
// Addr: 14031a9c0
// Size: 911 bytes


ulonglong FUN_14031a9c0(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  char *_Str1;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  
  pbVar12 = (byte *)((ulonglong)param_4 + param_3);
  *param_2 = param_3;
  param_2[2] = (longlong)pbVar12;
  *(undefined4 *)(param_2 + 3) = 0;
  (*(code *)param_2[7])(param_2);
  pbVar9 = (byte *)*param_2;
  if (pbVar9 < pbVar12) {
    pbVar11 = (byte *)0x0;
    bVar4 = false;
    do {
      bVar1 = *pbVar9;
      if (bVar1 == 0x65) {
        if (pbVar9 + 6 != pbVar12) {
          if (pbVar9 + 6 < pbVar12) {
            bVar2 = pbVar9[5];
            if (((bVar2 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
               (((byte)(bVar2 - 0x3e) < 0x40 &&
                ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar2 - 0x3e) & 0x3f) & 1) != 0))))
            goto LAB_14031aa57;
          }
          goto LAB_14031ab48;
        }
LAB_14031aa57:
        iVar5 = strncmp((char *)pbVar9,"eexec",5);
        if (iVar5 != 0) goto LAB_14031aa7e;
        break;
      }
LAB_14031aa7e:
      if (bVar1 == 99) {
        if (pbVar9 + 10 == pbVar12) {
LAB_14031aabb:
          iVar5 = strncmp((char *)pbVar9,"closefile",9);
          if (iVar5 != 0) goto LAB_14031aad8;
          break;
        }
        if (pbVar9 + 10 < pbVar12) {
          bVar2 = pbVar9[9];
          if (((bVar2 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
             (((byte)(bVar2 - 0x3e) < 0x40 &&
              ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar2 - 0x3e) & 0x3f) & 1) != 0))))
          goto LAB_14031aabb;
        }
LAB_14031ab48:
        if (bVar1 - 0x30 < 10) {
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) break;
          bVar4 = true;
          pbVar11 = pbVar9;
        }
        else {
          if (bVar1 == 0x52) {
            if (pbVar12 <= pbVar9 + 6) goto LAB_14031ad07;
            bVar13 = pbVar9[1] == 0x44;
LAB_14031ab86:
            if ((!bVar13) || (!bVar4)) goto LAB_14031ad07;
            pbVar9 = (byte *)param_2[2];
            *param_2 = (longlong)pbVar11;
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50);
            (*(code *)param_2[7])(param_2);
            if ((pbVar9 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_14031ad3c:
              if (lVar3 == 0) {
                *(undefined4 *)(param_2 + 3) = 3;
              }
              return 3;
            }
            iVar5 = (*(code *)param_2[9])(param_2);
            (*(code *)param_2[8])(param_2);
            if ((iVar5 < 0) || ((longlong)(pbVar9 + (-1 - *param_2)) <= (longlong)iVar5))
            goto LAB_14031ad3c;
            *param_2 = (longlong)(iVar5 + 1) + *param_2;
            if ((int)param_2[3] != 0) {
              return 3;
            }
          }
          else {
            if (bVar1 == 0x2d) {
              if (pbVar9 + 6 < pbVar12) {
                bVar13 = pbVar9[1] == 0x7c;
                goto LAB_14031ab86;
              }
            }
            else if ((bVar1 == 0x2f) && (pbVar9 + 2 < pbVar12)) {
              pbVar9 = pbVar9 + 1;
              *param_2 = (longlong)pbVar9;
              (*(code *)param_2[8])(param_2);
              if ((int)param_2[3] == 0) {
                uVar8 = (int)*param_2 - (int)pbVar9;
                if ((uVar8 - 1 < 0x15) && ((byte *)*param_2 < pbVar12)) {
                  puVar10 = &DAT_14043bfc0;
                  uVar6 = 7;
                  do {
                    if (uVar6 == uVar8) {
                      _Str1 = *(char **)(puVar10 + 8);
                      iVar5 = memcmp(pbVar9,_Str1,(ulonglong)uVar8);
                      if (iVar5 == 0) {
                        if (((*(uint *)(puVar10 + 0x30) &
                             (*(uint *)((longlong)param_2 + 0x294) & 1) + 1) != 0) &&
                           (((*(uint *)((longlong)param_2 + 0x294) & 2) == 0 ||
                            (iVar5 = strcmp(_Str1,"CharStrings"), iVar5 == 0)))) {
                          uVar7 = FUN_14031afd0(param_1,param_2,puVar10);
                          *(int *)(param_2 + 3) = (int)uVar7;
                          if ((int)uVar7 != 0) {
                            if ((char)uVar7 != -0x5e) {
                              return uVar7;
                            }
                            *(undefined4 *)(param_2 + 3) = 0;
                          }
                        }
                        break;
                      }
                    }
                    uVar6 = *(uint *)(puVar10 + 0x38);
                    puVar10 = puVar10 + 0x38;
                  } while (uVar6 != 0);
                }
                goto LAB_14031ad13;
              }
              break;
            }
LAB_14031ad07:
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] != 0) break;
          }
LAB_14031ad13:
          bVar4 = false;
        }
      }
      else {
LAB_14031aad8:
        if (bVar1 != 0x46) goto LAB_14031ab48;
        if (pbVar9 + 0xe != pbVar12) {
          if (pbVar9 + 0xe < pbVar12) {
            bVar2 = pbVar9[0xd];
            if (((bVar2 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
               (((byte)(bVar2 - 0x3e) < 0x40 &&
                ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar2 - 0x3e) & 0x3f) & 1) != 0))))
            goto LAB_14031ab10;
          }
          goto LAB_14031ab48;
        }
LAB_14031ab10:
        iVar5 = strncmp((char *)pbVar9,"FontDirectory",0xd);
        if (iVar5 != 0) goto LAB_14031ab48;
        if ((*(uint *)((longlong)param_2 + 0x294) & 1) != 0) {
          *(uint *)((longlong)param_2 + 0x294) = *(uint *)((longlong)param_2 + 0x294) | 2;
        }
        *param_2 = (longlong)(pbVar9 + 0xd);
      }
      (*(code *)param_2[7])(param_2);
      pbVar9 = (byte *)*param_2;
    } while (pbVar9 < pbVar12);
  }
  return (ulonglong)*(uint *)(param_2 + 3);
}

