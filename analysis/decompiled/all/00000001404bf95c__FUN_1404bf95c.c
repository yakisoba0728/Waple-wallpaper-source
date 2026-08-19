// Function: FUN_1404bf95c
// Addr: 1404bf95c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf95c(byte *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  char *unaff_RBX;
  char unaff_SPL;
  longlong unaff_RDI;
  byte *pbVar5;
  
  uVar3 = in_EAX ^ 0x47002779;
  pbVar5 = (byte *)(ulonglong)uVar3;
  if ((POPCOUNT(uVar3 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = (byte)uVar3;
  pbVar5[unaff_RDI * 8 + 0x4b] = pbVar5[unaff_RDI * 8 + 0x4b] + bVar2;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *pbVar5 = *pbVar5 + bVar2;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
  if (*unaff_RBX < '\0') {
    cRam00000001704c20ee = cRam00000001704c20ee + (char)((ulonglong)param_2 >> 8);
    *param_4 = *param_4 + unaff_SPL;
    *pbVar5 = *pbVar5 + bVar2;
    pbVar5 = pbVar5 + 0x2b002778;
    *pbVar5 = *pbVar5 + (char)param_2;
    if ((char)*pbVar5 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar5 = *pbVar5 ^ bVar2;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar2;
  uVar4 = uVar3 + 0x64150007 + (uint)CARRY1(bVar1,bVar2);
  *(char *)(ulonglong)uVar4 =
       (*(char *)(ulonglong)uVar4 - (char)uVar4) -
       (0x9beafff8 < uVar3 || CARRY4(uVar3 + 0x64150007,(uint)CARRY1(bVar1,bVar2)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

