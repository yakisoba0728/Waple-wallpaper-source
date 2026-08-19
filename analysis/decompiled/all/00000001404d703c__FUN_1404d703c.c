// Function: FUN_1404d703c
// Addr: 1404d703c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7090) overlaps instruction at (ram,0x0001404d708f)
    */

void FUN_1404d703c(uint *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  byte bVar9;
  uint *in_RAX;
  char *pcVar8;
  byte bVar10;
  char cVar11;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  longlong in_FS_OFFSET;
  bool bVar12;
  bool in_PF;
  
  cVar11 = (char)((ulonglong)param_2 >> 8);
  bVar6 = (byte)in_RAX;
  if (in_PF) {
    uVar5 = *in_RAX;
    bVar9 = (byte)((ulonglong)in_RAX >> 8);
    *(byte *)in_RAX = (char)*in_RAX + bVar9;
    if ((char)*in_RAX == '\0' || SCARRY1((char)uVar5,bVar9) != (char)*in_RAX < '\0') {
      *(byte *)param_1 = (byte)*param_1 + bVar9;
      *(byte *)in_RAX = (char)*in_RAX + bVar6;
      *(char *)((longlong)in_RAX + 0x3e) = *(char *)((longlong)in_RAX + 0x3e) + bVar6;
      pcVar8 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
                                ) + 0x3e);
      *pcVar8 = *pcVar8 + unaff_BH;
      uVar5 = *in_RAX;
      *(byte *)in_RAX = (char)*in_RAX + bVar9;
      bVar10 = (byte)param_1;
      if ((char)*in_RAX == '\0' || SCARRY1((char)uVar5,bVar9) != (char)*in_RAX < '\0') {
        *(byte *)param_1 = (byte)*param_1 + bVar9;
        (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar9 = *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
      ;
      *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
           bVar10;
      uVar2 = LocalDescriptorTableRegister();
      *(undefined4 *)(&stack0x00000000 + in_FS_OFFSET + param_2 * 2) = uVar2;
      *(byte *)in_RAX = (char)*in_RAX + bVar6 + CARRY1(bVar9,bVar10);
      if (param_1 == (uint *)0x1 || (char)*in_RAX == '\0') {
        *(char *)(in_RAX + -8) = (char)in_RAX[-8] + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)param_1 = (byte)*param_1 ^ bVar9;
  }
  else {
    uVar5 = *param_1;
    *(byte *)param_1 = (byte)*param_1 + bVar6;
    puVar4 = (uint *)((longlong)in_RAX * 2);
    uVar3 = (uint)CARRY1((byte)uVar5,bVar6);
    uVar5 = *puVar4;
    uVar7 = (uint)in_RAX;
    uVar1 = *puVar4;
    *puVar4 = (uVar1 - uVar7) - uVar3;
    uVar3 = (uint)(uVar5 < uVar7 || uVar1 - uVar7 < uVar3);
    uVar5 = *param_1;
    uVar1 = *param_1;
    *param_1 = (uVar1 - uVar7) - uVar3;
    uVar5 = (uint)(uVar5 < uVar7 || uVar1 - uVar7 < uVar3);
    bVar12 = CARRY4(*in_RAX,uVar7) || CARRY4(*in_RAX + uVar7,uVar5);
    *in_RAX = *in_RAX + uVar7 + uVar5;
    pcVar8 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar6 * '\x02' + bVar12);
    *pcVar8 = *pcVar8 + cVar11 + (CARRY1(bVar6,bVar6) || CARRY1(bVar6 * '\x02',bVar12));
    uRam00000001346a70a0 =
         uRam00000001346a70a0 & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

