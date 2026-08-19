// Function: FUN_1402b2e60
// Addr: 1402b2e60
// Size: 5 bytes


void FUN_1402b2e60(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_58 [48];
  
  puVar9 = (undefined4 *)FUN_140291b90(auStack_58);
  uVar13 = *(undefined8 *)(puVar9 + 4);
  uVar8 = *(undefined8 *)(puVar9 + 6);
  uVar1 = puVar9[7];
  uVar2 = puVar9[8];
  uVar3 = puVar9[9];
  uVar4 = puVar9[10];
  uVar5 = puVar9[1];
  uVar6 = puVar9[2];
  uVar7 = puVar9[3];
  *(undefined4 *)(param_1 + 0x2c) = *puVar9;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  uStack_70 = (undefined4)uVar8;
  uStack_78 = (undefined4)uVar13;
  uStack_74 = (undefined4)((ulonglong)uVar13 >> 0x20);
  *(undefined4 *)(param_1 + 0x3c) = uStack_78;
  *(undefined4 *)(param_1 + 0x40) = uStack_74;
  *(undefined4 *)(param_1 + 0x44) = uStack_70;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  lVar10 = func_0x0001402c87d4();
  if (lVar10 != 0) {
    if (*(longlong *)(param_3 + 8) != lVar10) {
      if (*(longlong *)(param_3 + 8) != 0) {
        func_0x0001402bf8e0();
      }
      *(undefined8 *)(param_3 + 8) = 0;
      lVar12 = -1;
      do {
        lVar11 = lVar12;
        lVar12 = lVar11 + 1;
      } while (*(char *)(lVar10 + 1 + lVar11) != '\0');
      lVar12 = thunk_FUN_1402da070(lVar11 + 2);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar12,lVar10,lVar11 + 2);
      }
      *(undefined8 *)(param_3 + 8) = 0;
    }
    func_0x0001402bf8e0(lVar10);
  }
  pcVar14 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  if (*(char **)(param_3 + 8) != (char *)0x0) {
    pcVar14 = *(char **)(param_3 + 8);
  }
  uVar13 = FUN_140013890(pcVar14,param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x10) = uVar13;
  lVar10 = func_0x0001402c8920();
  if (lVar10 != 0) {
    if (*(longlong *)(param_3 + 0x18) == lVar10) {
      func_0x0001402bf8e0(lVar10);
    }
    else {
      if (*(longlong *)(param_3 + 0x18) != 0) {
        func_0x0001402bf8e0();
      }
      *(undefined8 *)(param_3 + 0x18) = 0;
      lVar12 = -1;
      do {
        lVar11 = lVar12;
        lVar12 = lVar11 + 1;
      } while (*(char *)(lVar10 + 1 + lVar11) != '\0');
      lVar12 = thunk_FUN_1402da070(lVar11 + 2);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar12,lVar10,lVar11 + 2);
      }
      *(undefined8 *)(param_3 + 0x18) = 0;
      func_0x0001402bf8e0(lVar10);
    }
  }
  pcVar14 = 
  ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov:November:Dec:December"
  ;
  if (*(char **)(param_3 + 0x18) != (char *)0x0) {
    pcVar14 = *(char **)(param_3 + 0x18);
  }
  uVar13 = FUN_140013890(pcVar14,param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x18) = uVar13;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1402dd8b0(0xd,1);
}

