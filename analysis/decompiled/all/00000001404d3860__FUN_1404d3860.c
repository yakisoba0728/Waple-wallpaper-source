// Function: FUN_1404d3860
// Addr: 1404d3860
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3860(void)

{
  char cVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  uint *unaff_RSI;
  uint uVar2;
  
  cVar1 = (char)in_EAX + -0x7e;
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + cVar1;
  *unaff_RSI = *unaff_RSI & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

