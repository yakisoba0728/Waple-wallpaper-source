// Function: FUN_1404b82cc
// Addr: 1404b82cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b82cc(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  char *unaff_RBX;
  uint unaff_ESI;
  int unaff_EDI;
  char *pcVar7;
  byte in_CF;
  
  cVar2 = cRam0000000140ab8f47;
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  iVar3 = in_EAX + (int)&stack0x00000000 +
          (uint)(CARRY4(unaff_ESI,in_EAX) || CARRY4(unaff_ESI + in_EAX,(uint)in_CF));
  pcVar7 = (char *)CONCAT71(uVar6,cRam0000000140ab8f47);
  pcVar1 = (char *)CONCAT71(uVar6,cRam0000000140ab8f47);
  cRam0000000140ab8f47 = cRam0000000140ab8f47 + (char)param_1;
  *pcVar1 = *pcVar7 + (char)iVar3;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_2 >> 8);
  uVar4 = (uint)(short)iVar3;
  uVar5 = (ulonglong)(uVar4 | *(uint *)(ulonglong)uVar4);
  *(char *)(uVar5 * 2) = cVar2;
  pcVar7 = (char *)(ulonglong)(uint)(unaff_EDI - *(int *)(uVar5 + 0xd));
  *pcVar7 = *pcVar7 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

