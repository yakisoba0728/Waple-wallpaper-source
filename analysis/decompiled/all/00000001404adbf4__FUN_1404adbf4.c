// Function: FUN_1404adbf4
// Addr: 1404adbf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adbf4(int *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte *in_RAX;
  undefined7 uVar7;
  char *pcVar6;
  char *unaff_RBX;
  undefined1 *puVar8;
  uint unaff_EBP;
  undefined8 unaff_RSI;
  byte in_CF;
  bool bVar9;
  bool bVar10;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  undefined1 auStack_18 [8];
  uint *puVar5;
  
  unaff_RBX[0x12] = unaff_RBX[0x12] | in_CF >> 1;
  bVar10 = (in_CF & 1) != 0;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (byte)in_RAX;
  if (param_1 == (int *)0x0) {
    cVar4 = bVar3 + *in_RAX + bVar10;
    bVar3 = cVar4 + *(char *)CONCAT71(uVar7,cVar4) +
            (CARRY1(bVar3,*in_RAX) || CARRY1(bVar3 + *in_RAX,bVar10));
    puVar5 = (uint *)CONCAT71(uVar7,bVar3);
    puVar8 = auStack_18;
    *param_2 = (int)in_ST0;
    *puVar5 = *puVar5 & (uint)puVar5;
    bVar10 = CARRY1((byte)*puVar5,bVar3);
    *(byte *)puVar5 = (byte)*puVar5 + bVar3;
    param_2 = (int *)(ulonglong)*(uint *)((longlong)param_2 * 2);
    in_ST0 = in_ST1;
  }
  else {
    bVar3 = bVar3 + *in_RAX + bVar10;
    puVar5 = (uint *)CONCAT71(uVar7,bVar3);
    *puVar5 = *puVar5 & (uint)puVar5;
    bVar9 = CARRY1((byte)*puVar5,bVar3);
    *(byte *)puVar5 = (byte)*puVar5 + bVar3;
    unaff_RBX[0x12] = unaff_RBX[0x12];
    if (param_1 != (int *)0x0) {
      *param_1 = *param_1 + (int)&stack0x00000000;
      cVar4 = *unaff_RBX;
      *unaff_RBX = *unaff_RBX + (char)param_2;
      if (!SCARRY1(cVar4,(char)param_2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)(ulonglong)*(uint *)((longlong)param_2 * 2) = (int)in_ST0;
      uRam00000001a877dc46 = uRam00000001a877dc46 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar8 = &stack0xfffffffffffffff8;
    bVar1 = bVar3 + (byte)*puVar5;
    bVar10 = CARRY1(bVar3,(byte)*puVar5) || CARRY1(bVar1,bVar9);
    puVar5 = (uint *)CONCAT71(uVar7,bVar1 + bVar9);
    in_ST2 = in_ST1;
  }
  *(undefined8 *)(puVar8 + -8) = unaff_RSI;
  uVar7 = (undefined7)((ulonglong)puVar5 >> 8);
  bVar3 = (char)puVar5 + (byte)*puVar5 + bVar10;
  puVar5 = (uint *)CONCAT71(uVar7,bVar3);
  *(uint **)(puVar8 + -0x10) = puVar5;
  *param_2 = (int)in_ST0;
  *puVar5 = *puVar5 & (uint)puVar5;
  uVar2 = *puVar5;
  *(byte *)puVar5 = (byte)*puVar5 + bVar3;
  *(undefined1 **)(puVar8 + -0x18) = puVar8 + -0x10;
  cVar4 = bVar3 + (byte)*puVar5 + CARRY1((byte)uVar2,bVar3);
  puVar5 = (uint *)CONCAT71(uVar7,cVar4);
  *(int *)(ulonglong)*(uint *)((longlong)param_2 * 2) = (int)in_ST2;
  *puVar5 = *puVar5 & (uint)puVar5;
  pcVar6 = (char *)CONCAT71(uVar7,cVar4);
  pcVar6[0x3f] = pcVar6[0x3f] + (char)((ulonglong)param_1 >> 8);
  *pcVar6 = *pcVar6 + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

