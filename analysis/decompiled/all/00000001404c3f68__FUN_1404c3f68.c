// Function: FUN_1404c3f68
// Addr: 1404c3f68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3f68(undefined8 param_1,int param_2)

{
  int *piVar1;
  char cVar3;
  int in_EAX;
  uint uVar2;
  byte bVar4;
  undefined7 uVar5;
  byte *unaff_RBX;
  byte in_CF;
  
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  uVar2 = in_EAX + 0x15000e64 + (uint)in_CF;
  cRam000000015a3c5107 = cRam000000015a3c5107 + (char)param_2;
  bVar4 = (byte)param_1 ^ *unaff_RBX;
  cVar3 = (char)(uVar2 >> 8);
  *(char *)CONCAT71(uVar5,bVar4) = *(char *)CONCAT71(uVar5,bVar4) + cVar3;
  *(char *)CONCAT71(uVar5,bVar4) = *(char *)CONCAT71(uVar5,bVar4) + cVar3;
  *(char *)CONCAT71(uVar5,bVar4) = *(char *)CONCAT71(uVar5,bVar4) + cVar3;
  piVar1 = (int *)(((ulonglong)(uVar2 ^ 0xd) ^ 0x9b) * 2 + -0x1fef0fee);
  *piVar1 = *piVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

