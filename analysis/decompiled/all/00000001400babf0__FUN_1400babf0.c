// Function: FUN_1400babf0
// Addr: 1400babf0
// Size: 401 bytes


char * FUN_1400babf0(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  
  pcVar3 = (char *)0x0;
  puVar8 = (uint *)pcVar3;
  puVar10 = (uint *)pcVar3;
  if ((param_2 != (longlong *)0x0) &&
     (lVar6 = *param_2, puVar8 = (uint *)0x0, puVar10 = (uint *)0x0, lVar6 != 0)) {
    puVar10 = (uint *)(param_2[3] + lVar6);
    puVar8 = (uint *)(param_2[2] + lVar6);
  }
  iVar4 = *(int *)(param_1 + 0x180);
  iVar9 = 0;
  switch(iVar4) {
  case 0:
    *(undefined4 *)(param_1 + 0x78) = 0;
  case 1:
    for (; 7 < (ulonglong)((longlong)puVar8 - (longlong)puVar10);
        puVar10 = (uint *)((longlong)puVar10 + uVar12)) {
      uVar11 = *puVar10;
      cVar1 = *(char *)(param_1 + 0x78);
      uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
      *(uint *)(param_1 + 0x7c) = uVar11;
      iVar4 = (int)((ulonglong)*(undefined8 *)puVar10 >> 0x20);
      *(int *)(param_1 + 0x74) = iVar4;
      if (iVar4 != 0x54414449) {
        if (iVar4 == 0x54416466) {
          if ((cVar1 != 'I') && (*(undefined4 *)(param_1 + 0x78) = 0x54416466, 3 < uVar11)) {
            puVar10 = puVar10 + 2;
            *(uint *)(param_1 + 0x7c) = uVar11 - 4;
switchD_1400bac5e_caseD_2:
            if ((longlong)puVar8 - (longlong)puVar10 < 4) {
              *(undefined8 *)(param_1 + 0xae30) = 0;
              iVar4 = 3;
switchD_1400bac5e_caseD_3:
              while( true ) {
                if (puVar10 == puVar8) goto UNWIND_INFO_1400badb4_UnwindCodes_41__OffsetInProlog;
                uVar11 = *(uint *)(param_1 + 0xae30);
                *(ulonglong *)(param_1 + 0xae30) =
                     *(ulonglong *)(param_1 + 0xae30) & 0xffffffffffffff00;
                uVar2 = *puVar10;
                puVar10 = (uint *)((longlong)puVar10 + 1);
                uVar7 = uVar11 & 0xff;
                uVar12 = (ulonglong)(byte)uVar2 << (0x38U - (char)uVar11 & 0x3f) |
                         *(ulonglong *)(param_1 + 0xae30);
                *(ulonglong *)(param_1 + 0xae30) = uVar12;
                if (uVar7 == 0x18) break;
                *(ulonglong *)(param_1 + 0xae30) = uVar7 + 8 | uVar12;
              }
              uVar11 = (uint)(uVar12 >> 0x20);
            }
            else {
              uVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                       uVar11 << 0x18;
            }
            uVar2 = *(uint *)(param_1 + 0xe4);
            if (uVar11 == uVar2) {
              if (uVar2 != 0xffffffff) {
                iVar4 = 4;
                *(uint *)(param_1 + 0xe4) = uVar2 + 1;
                lVar6 = (ulonglong)*(uint *)(param_1 + 0x7c) + 4;
                goto code_r0x0001400bad1a;
              }
              pcVar3 = "#png: unsupported PNG file";
            }
            else {
              pcVar3 = "#png: bad animation sequence number";
            }
            goto code_r0x0001400bae42;
          }
        }
        else {
          if (cVar1 != '\0') {
            *(undefined1 *)(param_1 + 0x58) = 0x20;
            uVar11 = *(uint *)(param_1 + 0x9c) + 1;
            if (uVar11 < *(uint *)(param_1 + 0x9c)) {
              uVar11 = 0xffffffff;
            }
            *(uint *)(param_1 + 0x9c) = uVar11;
            *(undefined4 *)(param_1 + 0x180) = 0;
            goto code_r0x0001400bae42;
          }
          if (iVar4 != 0x4c546366) goto LAB_1400bad9f;
        }
code_r0x0001400bad86:
        pcVar3 = "#png: bad chunk";
        goto code_r0x0001400bae42;
      }
      if (cVar1 == 'f') goto code_r0x0001400bad86;
      *(undefined4 *)(param_1 + 0x78) = 0x54414449;
LAB_1400bad9f:
      iVar4 = 5;
      lVar6 = (ulonglong)uVar11 + 0xc;
code_r0x0001400bad1a:
      *(longlong *)(param_1 + 0xae30) = lVar6;
switchD_1400bac5e_caseD_4:
      uVar12 = *(ulonglong *)(param_1 + 0xae30);
      if ((ulonglong)((longlong)puVar8 - (longlong)puVar10) < uVar12) {
        *(byte **)(param_1 + 0xae30) = (byte *)((uVar12 - (longlong)puVar8) + (longlong)puVar10);
        puVar10 = puVar8;
UNWIND_INFO_1400badb4_UnwindCodes_41__OffsetInProlog:
        pcVar3 = "$base: short read";
        iVar9 = 1;
        goto switchD_1400bac5e_default;
      }
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    iVar4 = 1;
    pcVar3 = "$base: short read";
    iVar9 = 1;
  default:
switchD_1400bac5e_default:
    iVar5 = 0;
    if (iVar9 != 0) {
      iVar5 = iVar4;
    }
    *(int *)(param_1 + 0x180) = iVar5;
code_r0x0001400bae42:
    if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
      param_2[3] = (longlong)puVar10 - *param_2;
    }
    return pcVar3;
  case 2:
    goto switchD_1400bac5e_caseD_2;
  case 3:
    goto switchD_1400bac5e_caseD_3;
  case 4:
  case 5:
    goto switchD_1400bac5e_caseD_4;
  }
}

