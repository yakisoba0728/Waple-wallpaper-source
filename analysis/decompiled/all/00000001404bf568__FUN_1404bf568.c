// Function: FUN_1404bf568
// Addr: 1404bf568
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf568(void)

{
  byte *pbVar1;
  byte bVar2;
  int *in_RAX;
  byte unaff_BH;
  longlong unaff_RBP;
  
  pbVar1 = (byte *)((longlong)in_RAX + unaff_RBP * 2);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  *in_RAX = *in_RAX + (int)in_RAX + (uint)CARRY1(bVar2,unaff_BH);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

