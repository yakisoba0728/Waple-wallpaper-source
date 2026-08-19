// Function: FUN_1404aef40
// Addr: 1404aef40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aef40(char *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *in_RAX;
  int *unaff_RBX;
  char *unaff_RSI;
  bool bVar4;
  
  uVar2 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar2;
  bVar1 = (byte)in_RAX;
  bVar4 = CARRY1((byte)*in_RAX,bVar1);
  uVar3 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar1;
  if (!SCARRY1((byte)uVar3,bVar1)) {
    *unaff_RBX = *unaff_RBX + (uint)(CARRY4(uVar2,*in_RAX) || CARRY4(uVar2 + *in_RAX,(uint)bVar4));
    uVar3 = in(0x49);
    *param_1 = *param_1 + (char)(uVar3 >> 8);
    *unaff_RSI = *unaff_RSI + (char)param_1;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char *)unaff_RBX = (char)*unaff_RBX + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

