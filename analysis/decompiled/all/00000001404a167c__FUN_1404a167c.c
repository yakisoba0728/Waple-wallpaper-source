// Function: FUN_1404a167c
// Addr: 1404a167c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a167c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int *in_RAX;
  byte bVar3;
  char unaff_BH;
  longlong unaff_RDI;
  uint *puVar2;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  while( true ) {
    *(char *)((longlong)in_RAX + param_1) = *(char *)((longlong)in_RAX + param_1) + bVar3;
    *(char *)((longlong)in_RAX + -0x1a) = *(char *)((longlong)in_RAX + -0x1a) + (char)param_2;
    uVar1 = (int)in_RAX + *in_RAX;
    puVar2 = (uint *)(ulonglong)uVar1;
    if (uVar1 == 0 || SCARRY4((int)in_RAX,*in_RAX) != (int)uVar1 < 0) break;
    *puVar2 = *puVar2 & uVar1;
    *(byte *)puVar2 = (byte)*puVar2 | (byte)uVar1;
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),
                     CONCAT11(((char)(uVar1 >> 8) + bVar3) * '\x02',(byte)uVar1));
    in_RAX = (int *)(ulonglong)(uVar1 | *(uint *)(ulonglong)uVar1);
    *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  }
  uVar1 = uVar1 + *puVar2 + 0x21004a + (uint)CARRY4(uVar1,*puVar2);
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  out(3,(char)uVar1);
  *(char *)(unaff_RDI + -0x1a) = *(char *)(unaff_RDI + -0x1a) + unaff_BH;
  *(byte *)(param_2 + 0x14216004) = *(byte *)(param_2 + 0x14216004) | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

