// Function: FUN_1404a7264
// Addr: 1404a7264
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7264(undefined8 param_1)

{
  uint uVar1;
  uint *in_RAX;
  char cVar2;
  undefined6 uVar3;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar1 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar1;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  cVar2 = (char)((ulonglong)param_1 >> 8) << 1;
  *in_RAX = *in_RAX | uVar1;
  if (SCARRY4(uVar1,0x680009f6)) {
    *(char *)CONCAT62(uVar3,CONCAT11(cVar2,(char)param_1)) =
         *(char *)CONCAT62(uVar3,CONCAT11(cVar2,(char)param_1)) + (char)in_RAX + -10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

