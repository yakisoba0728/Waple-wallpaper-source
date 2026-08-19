// Function: FUN_1404af0d0
// Addr: 1404af0d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af0d1) overlaps instruction at (ram,0x0001404af0d0)
    */

void FUN_1404af0d0(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *in_RAX;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool bVar5;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  bVar5 = CARRY1((byte)*in_RAX,bVar2);
  uVar4 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  if (!SCARRY1((byte)uVar4,bVar2)) {
    while( true ) {
      uVar4 = (uint)in_RAX + *in_RAX;
      uVar3 = uVar4 + bVar5;
      uVar4 = uVar3 + *(int *)(ulonglong)uVar3 +
              (uint)(CARRY4((uint)in_RAX,*in_RAX) || CARRY4(uVar4,(uint)bVar5));
      in_RAX = (uint *)(ulonglong)uVar4;
      param_1 = param_1 + -1;
      if (param_1 == (char *)0x0 || uVar4 == 0) break;
      out((short)param_2,uVar4);
      *param_1 = *param_1 + unaff_SPL;
      *(byte *)in_RAX = (byte)*in_RAX + (char)uVar4;
      pbVar1 = (byte *)((longlong)in_RAX + -0x6e);
      bVar2 = (byte)((ulonglong)param_2 >> 8);
      bVar5 = CARRY1(*pbVar1,bVar2);
      *pbVar1 = *pbVar1 + bVar2;
    }
    *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  *unaff_RDI = *unaff_RSI;
  *(char *)((longlong)unaff_RSI + -0x6e) =
       *(char *)((longlong)unaff_RSI + -0x6e) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

