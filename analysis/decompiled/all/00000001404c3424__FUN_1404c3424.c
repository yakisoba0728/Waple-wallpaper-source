// Function: FUN_1404c3424
// Addr: 1404c3424
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3424(undefined8 param_1,byte param_2)

{
  int iVar1;
  byte *in_RAX;
  
  iVar1 = (int)in_RAX + 0x24e0402;
  if ((SCARRY4((int)in_RAX,0x24e0402) != SCARRY4(iVar1,(uint)CARRY1(param_2,*in_RAX))) ==
      (int)(iVar1 + (uint)CARRY1(param_2,*in_RAX)) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

