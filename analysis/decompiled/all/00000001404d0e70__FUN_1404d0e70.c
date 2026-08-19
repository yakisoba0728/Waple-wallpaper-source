// Function: FUN_1404d0e70
// Addr: 1404d0e70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0e70(undefined8 param_1,undefined8 param_2,char param_3,char *param_4)

{
  uint *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar1 = (uint *)((longlong)unaff_RBP + 0xd50003f);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
  *param_4 = *param_4 + param_3;
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

