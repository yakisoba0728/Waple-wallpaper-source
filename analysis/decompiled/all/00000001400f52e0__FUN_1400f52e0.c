// Function: FUN_1400f52e0
// Addr: 1400f52e0
// Size: 854 bytes


void FUN_1400f52e0(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  int local_res8;
  longlong local_58 [3];
  ulonglong local_40;
  
  pcVar9 = "struct PS_INPUT\n{\n";
  if (param_3 != 2) {
    pcVar9 = "struct VS_OUTPUT\n{\n";
  }
  FUN_1400532a0(param_4,pcVar9,(param_3 != 2) + '\x12');
  uVar16 = 0;
  uVar13 = (int)(param_2[1] - *param_2 >> 3) * -0x49249249;
  local_res8 = 0;
  if (uVar13 != 0) {
    do {
      lVar8 = *param_2;
      lVar11 = uVar16 * 0x38;
      if (*(int *)(lVar11 + 0x30 + lVar8) == param_3) {
        if ((*(int *)(lVar11 + 0x28 + lVar8) < 1) ||
           (iVar2 = 3, *(char *)(lVar11 + 0x2c + lVar8) == '\0')) {
          iVar2 = *(int *)(lVar11 + lVar8);
        }
        pcVar9 = (&PTR_s_float_140482eb8)[(longlong)iVar2 * 2];
        sVar3 = strlen(pcVar9);
        FUN_1400532a0(param_4,pcVar9,sVar3);
        FUN_1400532a0(param_4,&DAT_1404738a8,1);
        puVar14 = (undefined8 *)(lVar8 + 8 + lVar11);
        puVar7 = puVar14;
        if (0xf < *(ulonglong *)(lVar11 + 0x20 + lVar8)) {
          puVar7 = (undefined8 *)*puVar14;
        }
        FUN_1400532a0(param_4,puVar7,*(undefined8 *)(lVar11 + 0x18 + lVar8));
        iVar2 = *(int *)(lVar11 + 0x28 + lVar8);
        iVar12 = 1;
        if ((0 < iVar2) && (4 < iVar2 * (*(int *)(lVar11 + lVar8) + 1))) {
          iVar5 = 4;
          if (*(int *)(lVar11 + lVar8) == 1) {
            iVar5 = 2;
          }
          iVar12 = (uint)((int)((longlong)iVar2 % (longlong)iVar5) != 0) + iVar2 / iVar5;
          FUN_1400534d0(param_4,CONCAT71((uint7)((ulonglong)((longlong)iVar2 % (longlong)iVar5) >> 8
                                                ) & 0xffffff,0x5b));
          puVar4 = (undefined8 *)FUN_140053e40(local_58,iVar12);
          puVar7 = puVar4 + 2;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar4 = (undefined8 *)*puVar4;
          }
          FUN_1400532a0(param_4,puVar4,*puVar7);
          if (local_40 < 0x10) {
LAB_1400f54a3:
            FUN_1400534d0(param_4,0x5d);
            goto LAB_1400f54ad;
          }
          uVar10 = local_40 + 1;
          lVar6 = local_58[0];
          if (uVar10 < 0x1000) {
LAB_1400f549e:
            thunk_FUN_14028af80(lVar6,uVar10);
            goto LAB_1400f54a3;
          }
          lVar6 = *(longlong *)(local_58[0] + -8);
          if ((local_58[0] - lVar6) - 8U < 0x20) {
            uVar10 = local_40 + 0x28;
            goto LAB_1400f549e;
          }
LAB_1400f5603:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          break;
        }
LAB_1400f54ad:
        FUN_1400532a0(param_4,&DAT_1404789c4,3);
        lVar6 = *(longlong *)(lVar11 + 0x18 + lVar8);
        uVar10 = *(ulonglong *)(lVar11 + 0x20 + lVar8);
        puVar7 = puVar14;
        if (0xf < uVar10) {
          puVar7 = (undefined8 *)*puVar14;
        }
        if ((lVar6 == 0xb) && (iVar2 = memcmp(puVar7,"gl_Position",0xb), iVar2 == 0)) {
          FUN_1400532a0(param_4,"SV_POSITION",0xb);
        }
        else {
          if (0xf < uVar10) {
            puVar14 = (undefined8 *)*puVar14;
          }
          if ((lVar6 == 0x10) && (iVar2 = memcmp(puVar14,"gl_ViewportIndex",0x10), iVar2 == 0)) {
            FUN_1400532a0(param_4,"SV_ViewportArrayIndex",0x15);
          }
          else {
            FUN_1400532a0(param_4,"TEXCOORD",8);
            puVar14 = (undefined8 *)FUN_140053e40(local_58,local_res8);
            puVar7 = puVar14 + 2;
            if (0xf < (ulonglong)puVar14[3]) {
              puVar14 = (undefined8 *)*puVar14;
            }
            FUN_1400532a0(param_4,puVar14,*puVar7);
            if (0xf < local_40) {
              uVar10 = local_40 + 1;
              lVar8 = local_58[0];
              if (0xfff < uVar10) {
                lVar8 = *(longlong *)(local_58[0] + -8);
                if (0x1f < (local_58[0] - lVar8) - 8U) goto LAB_1400f5603;
                uVar10 = local_40 + 0x28;
              }
              thunk_FUN_14028af80(lVar8,uVar10);
            }
            local_res8 = local_res8 + iVar12;
          }
        }
        FUN_1400532a0(param_4,&DAT_140487a64,2);
      }
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < uVar13);
  }
  FUN_1400532a0(param_4,&DAT_140487a54,4);
  return;
}

