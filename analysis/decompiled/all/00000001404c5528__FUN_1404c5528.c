// Function: FUN_1404c5528
// Addr: 1404c5528
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5528(byte *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  byte in_CF;
  char *pcVar4;
  
  *(uint *)(param_1 + param_2) = (*(int *)(param_1 + param_2) - unaff_ESI) - (uint)in_CF;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  uVar3 = in_EAX + 0x11e013f0 + (uint)CARRY1(bVar1,unaff_BL);
  pcVar4 = (char *)(ulonglong)uVar3;
  pcVar4[-0x49] = '\0';
  cVar2 = (char)uVar3;
  *param_1 = *param_1 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

