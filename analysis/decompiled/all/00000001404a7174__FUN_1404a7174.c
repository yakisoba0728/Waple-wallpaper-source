// Function: FUN_1404a7174
// Addr: 1404a7174
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a71dd) */

void FUN_1404a7174(char *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  char cVar5;
  int in_EAX;
  uint *puVar6;
  longlong unaff_RDI;
  
  uVar1 = (undefined3)((uint)(in_EAX + -0x64fffc3c) >> 8);
  uVar4 = in((short)param_2);
  uVar2 = CONCAT31(uVar1,uVar4);
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
  uVar2 = CONCAT31(uVar1,cRam21004a708c0009ec);
  puVar6 = (uint *)(ulonglong)uVar2;
  *(char *)puVar6 = (char)*puVar6 + cRam21004a708c0009ec;
  *(char *)(unaff_RDI + -0x14) = *(char *)(unaff_RDI + -0x14) + (char)((ulonglong)param_2 >> 8);
  *puVar6 = *puVar6 | uVar2;
  cVar5 = in((short)uVar2);
  uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),cVar5);
  puVar6 = (uint *)(uVar3 & 0xffffffff);
  *puVar6 = *puVar6 | (uint)uVar3;
  *param_1 = *param_1 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

