// Function: FUN_1404d18a0
// Addr: 1404d18a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d18a0(char *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  byte unaff_BH;
  longlong unaff_RBP;
  byte in_CF;
  uint *puVar5;
  
  iVar3 = in_EAX + 0x2310003 + (uint)in_CF;
  *param_1 = *param_1 + (char)((uint)iVar3 >> 8);
  cVar2 = in(0);
  uVar1 = CONCAT31((int3)((uint)iVar3 >> 8),cVar2);
  puVar5 = (uint *)(ulonglong)uVar1;
  *(char *)(unaff_RBP + 0x74) = *(char *)(unaff_RBP + 0x74) + cVar2;
  uVar4 = *puVar5;
  *puVar5 = *puVar5 + uVar1;
  iVar3 = (uVar1 - CARRY4(uVar4,uVar1)) + -0x10cc0164;
  uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),(char)iVar3 + (char)param_2) + 0x5d6003c;
  *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) ^ unaff_BH;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) ^ unaff_BH;
  *param_1 = *param_1 +
             (char)((uint)(CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)param_2) + 0x5d6003c) >>
                   8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

