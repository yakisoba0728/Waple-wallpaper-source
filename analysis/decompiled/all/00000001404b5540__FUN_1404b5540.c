// Function: FUN_1404b5540
// Addr: 1404b5540
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b5541) overlaps instruction at (ram,0x0001404b5540)
    */

void FUN_1404b5540(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *in_RAX;
  longlong unaff_RBX;
  undefined4 *unaff_RDI;
  byte in_CF;
  bool bVar4;
  char in_SF;
  char in_OF;
  
  uVar3 = (uint)in_RAX;
  if (in_OF == in_SF) {
    bVar4 = 0xf98778ff < uVar3;
    in_RAX = (uint *)(ulonglong)(uVar3 + 0x6788700);
  }
  else {
    bVar4 = CARRY4(*in_RAX,uVar3) || CARRY4(*in_RAX + uVar3,(uint)in_CF);
    *in_RAX = *in_RAX + uVar3 + (uint)in_CF;
    if (*in_RAX == 0) {
      uVar2 = in(param_2);
      *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)in_RAX = ((char)*in_RAX - (char)in_RAX) - bVar4;
  *(char *)(unaff_RBX + -0x72fffb68) =
       *(char *)(unaff_RBX + -0x72fffb68) + ((char)((ulonglong)in_RAX >> 0x18) >> 7);
  pcVar1 = (char *)((ulonglong)(uint)((int)in_RAX >> 0x1f) + 0x7d000768);
  *pcVar1 = *pcVar1 + (char)in_RAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

