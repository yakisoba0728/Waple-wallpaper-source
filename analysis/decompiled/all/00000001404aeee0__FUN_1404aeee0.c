// Function: FUN_1404aeee0
// Addr: 1404aeee0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404aee69) */
/* WARNING: Removing unreachable block (ram,0x0001404aee8d) */

void FUN_1404aeee0(char *param_1)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  int *unaff_RBX;
  undefined1 unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  uint *puVar4;
  
  bVar2 = (char)in_RAX - 0x1c;
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *(byte *)puVar4 = (byte)*puVar4 | bVar2;
  *unaff_RBX = *unaff_RBX + (uint)CARRY4((uint)puVar4,*puVar4);
  uVar3 = in(0x49);
  *param_1 = *param_1 + (char)((uint)uVar3 >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)uVar3 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

