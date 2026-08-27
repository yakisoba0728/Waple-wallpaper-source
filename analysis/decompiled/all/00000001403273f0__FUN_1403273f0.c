// Function: FUN_1403273f0
// Addr: 1403273f0
// Size: 844 bytes


uint FUN_1403273f0(undefined8 param_1,undefined4 *param_2,int param_3,int param_4,undefined8 param_5
                  )

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  
  *(undefined8 *)(param_2 + 0xae) = 0;
  *param_2 = 1;
  lVar10 = FUN_1402f81e0(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  *(longlong *)(param_2 + 0xa6) = lVar10;
  lVar11 = FUN_1402f04b0(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
  *(longlong *)(param_2 + 0xa8) = lVar11;
  if (lVar11 == 0) {
    uVar9 = 0xb;
  }
  else {
    uVar9 = FUN_140328c80(param_2);
    if ((uVar9 == 0) && (-1 < param_3)) {
      if ((short)param_3 == 0) {
        param_2[4] = param_2[0x90];
        param_2[0xe] = 0;
        param_2[1] = 0;
        uVar9 = param_2[2] | 0x211;
        if (*(char *)(param_2 + 0x41) != '\0') {
          uVar9 = param_2[2] | 0x215;
        }
        param_2[2] = uVar9 | 0x800;
        pcVar13 = *(char **)(param_2 + 0x3c);
        *(char **)(param_2 + 6) = pcVar13;
        *(char **)(param_2 + 8) = "Regular";
        if (pcVar13 == (char *)0x0) {
          if (*(longlong *)(param_2 + 0x76) != 0) {
            *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x76);
          }
        }
        else {
          pcVar12 = *(char **)(param_2 + 0x3a);
          if (pcVar12 != (char *)0x0) {
            cVar1 = *pcVar12;
            while (cVar1 != '\0') {
              cVar2 = *pcVar13;
              if (cVar1 == cVar2) {
                pcVar13 = pcVar13 + 1;
LAB_140327501:
                pcVar12 = pcVar12 + 1;
              }
              else {
                if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_140327501;
                if ((cVar2 != ' ') && (cVar2 != '-')) {
                  if (cVar2 == '\0') {
                    *(char **)(param_2 + 8) = pcVar12;
                  }
                  break;
                }
                pcVar13 = pcVar13 + 1;
              }
              cVar1 = *pcVar12;
            }
          }
        }
        param_2[10] = 0;
        *(undefined8 *)(param_2 + 0xc) = 0;
        local_88[0] = 9;
        local_60 = FUN_1402f0420(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"truetype");
        local_80 = *(undefined8 *)(param_2 + 0xaa);
        local_78 = param_2[0xac];
        if (param_4 != 0) {
          local_88[0] = local_88[0] | 0x10;
          local_50 = param_5;
          local_58 = param_4;
        }
        uVar9 = FUN_1402f26c0(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),local_88,0,
                              param_2 + 0xae);
        if (uVar9 == 0) {
          FUN_1402efd90(*(undefined8 *)(*(longlong *)(param_2 + 0xae) + 0x80));
          lVar4 = *(longlong *)(param_2 + 0xae);
          uVar6 = *(undefined4 *)(lVar4 + 0x5c);
          uVar7 = *(undefined4 *)(lVar4 + 0x60);
          uVar8 = *(undefined4 *)(lVar4 + 100);
          param_2[0x16] = *(undefined4 *)(lVar4 + 0x58);
          param_2[0x17] = uVar6;
          param_2[0x18] = uVar7;
          param_2[0x19] = uVar8;
          *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(lVar4 + 0x68);
          *(undefined2 *)((longlong)param_2 + 0x6a) = *(undefined2 *)(lVar4 + 0x6a);
          *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(lVar4 + 0x6c);
          *(undefined2 *)((longlong)param_2 + 0x6e) = *(undefined2 *)(lVar4 + 0x6e);
          *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(lVar4 + 0x70);
          *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)(lVar4 + 0x72);
          *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x106);
          *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x42);
          param_2[3] = 0;
          if (param_2[0x40] != 0) {
            param_2[3] = 1;
          }
          if ((*(byte *)(lVar4 + 0xc) & 2) != 0) {
            param_2[3] = param_2[0x40] != 0 | 2;
          }
          if ((*(byte *)(lVar4 + 8) & 0x20) != 0) {
            param_2[2] = param_2[2] | 0x20;
          }
          if (lVar10 != 0) {
            plVar5 = *(longlong **)(lVar11 + 0x40);
            local_8c = 0x10003;
            local_90 = 0x756e6963;
            local_98 = param_2;
            uVar9 = FUN_1402ef870(plVar5[3],0,&local_98,0);
            if (((uVar9 == 0) || ((uVar9 & 0xff) == 0xa3)) || ((uVar9 & 0xff) == 7)) {
              iVar3 = param_2[0x78];
              uVar9 = 0;
              if (iVar3 == 1) {
                local_90 = 0x41444243;
                local_8c = 0x20007;
                lVar10 = plVar5[2];
              }
              else if (iVar3 == 2) {
                local_90 = 0x41444f42;
                local_8c = 7;
                lVar10 = *plVar5;
              }
              else if (iVar3 == 3) {
                local_90 = 0x6c617431;
                local_8c = 0x30007;
                lVar10 = plVar5[3];
              }
              else {
                if (iVar3 != 4) {
                  return 0;
                }
                local_90 = 0x41444245;
                local_8c = 0x10007;
                lVar10 = plVar5[1];
              }
              if (lVar10 != 0) {
                uVar9 = FUN_1402ef870(lVar10,0,&local_98,0);
              }
            }
          }
        }
      }
      else {
        uVar9 = 6;
      }
    }
  }
  return uVar9;
}

