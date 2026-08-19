// Function: FUN_1404ac7f4
// Addr: 1404ac7f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac7f4(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined7 uVar4;
  byte bVar5;
  longlong unaff_RBP;
  char in_CF;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = ((char)in_RAX + '\f') - in_CF;
  pbVar1 = (byte *)(param_1 + CONCAT71(uVar4,cVar3));
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - bVar5;
  *(char *)((longlong)param_1 * 2) =
       *(char *)((longlong)param_1 * 2) + (char)param_2 + (bVar2 < bVar5);
  LocalDescriptorTableRegister();
  *(char *)(unaff_RBP + -0x4bffefbb) = *(char *)(unaff_RBP + -0x4bffefbb) + bVar5;
  *param_1 = *param_1 + (char)(((uint)CONCAT71(uVar4,cVar3) | 0x34) + 0x10459000 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

