// Function: FUN_1402a0a10
// Addr: 1402a0a10
// Size: 972 bytes


longlong *
FUN_1402a0a10(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,undefined8 param_7,char *param_8)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  short sVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [24];
  
  lVar9 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  lStack_70 = lVar9;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9);
  uVar8 = FUN_14029d190(&local_78);
  if ((lVar9 != 0) && (lVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9), lVar9 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,1);
  }
  cVar6 = *param_8;
  while (cVar6 != '\0') {
    if ((char)param_3[1] == '\0') {
      FUN_1402a7e60(param_3);
    }
    if ((char)param_4[1] == '\0') {
      FUN_1402a7e60(param_4);
    }
    lVar9 = *param_3;
    if (lVar9 != 0) {
      if (*param_4 == 0) goto LAB_1402a0b20;
LAB_1402a0adc:
      *param_6 = *param_6 | 2;
      break;
    }
    if (*param_4 == 0) goto LAB_1402a0adc;
LAB_1402a0b20:
    if (*param_8 == '%') {
      param_8 = param_8 + 1;
      local_78 = (undefined4)*param_4;
      uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
      lStack_70 = param_4[1];
      local_68 = (undefined4)*param_3;
      uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_60 = (undefined4)param_3[1];
      uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar10 = (undefined4 *)
                (*(code *)PTR__guard_dispatch_icall_140426ae8)
                          (param_1,local_58,&local_68,&local_78,param_5,param_6,param_7,*param_8,0);
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      *(undefined4 *)param_3 = *puVar10;
      *(undefined4 *)((longlong)param_3 + 4) = uVar3;
      *(undefined4 *)(param_3 + 1) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
    }
    else {
      if (*param_8 == ' ') {
LAB_1402a0b90:
        if ((char)param_3[1] == '\0') {
          FUN_1402a7e60(param_3);
        }
        if ((char)param_4[1] == '\0') {
          FUN_1402a7e60(param_4);
        }
        if (*param_3 == 0) {
          if (*param_4 == 0) goto LAB_1402a0d25;
        }
        else if (*param_4 != 0) goto LAB_1402a0d25;
        if ((char)param_3[1] == '\0') {
          FUN_1402a7e60(param_3);
        }
        cVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar8,0x48);
        if (cVar6 == '\0') goto LAB_1402a0d25;
        lVar9 = *param_3;
        if (lVar9 == 0) {
LAB_1402a0c4d:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_1402a0c2c:
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            iVar1 = **(int **)(lVar9 + 0x50);
            if (iVar1 < 1) goto LAB_1402a0c2c;
            **(int **)(lVar9 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar9 + 0x38);
            **(longlong **)(lVar9 + 0x38) = (longlong)(psVar2 + 1);
            sVar7 = *psVar2;
          }
          if (sVar7 == -1) goto LAB_1402a0c4d;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        goto LAB_1402a0b90;
      }
      if ((char)param_3[1] == '\0') {
        if (lVar9 == 0) {
LAB_1402a0ca0:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar9 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar9 + 0x38);
          }
          if (sVar7 == -1) goto LAB_1402a0ca0;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      cVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                        (uVar8,*(undefined2 *)((longlong)param_3 + 10),0);
      if (cVar6 != *param_8) goto LAB_1402a0adc;
      lVar9 = *param_3;
      if (lVar9 != 0) {
        if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_1402a0cfd:
          sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar1 = **(int **)(lVar9 + 0x50);
          if (iVar1 < 1) goto LAB_1402a0cfd;
          **(int **)(lVar9 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar9 + 0x38);
          **(longlong **)(lVar9 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 != -1) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_1402a0d25;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
LAB_1402a0d25:
    param_8 = param_8 + 1;
    cVar6 = *param_8;
  }
  if ((char)param_3[1] == '\0') {
    lVar9 = *param_3;
    if (lVar9 == 0) {
LAB_1402a0d53:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1402a0d53;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar9 = *param_4;
    if (lVar9 != 0) {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar7 != -1) goto LAB_1402a0da4;
    }
    *param_4 = 0;
  }
LAB_1402a0da4:
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1402a0dbd;
  }
  else if (*param_4 == 0) goto LAB_1402a0dbd;
  *param_6 = *param_6 | 1;
LAB_1402a0dbd:
  lVar9 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar9;
  return param_2;
}

