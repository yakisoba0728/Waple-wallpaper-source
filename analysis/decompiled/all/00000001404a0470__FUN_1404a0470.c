// Function: FUN_1404a0470
// Addr: 1404a0470
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0470(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  int *in_RAX;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte unaff_SPL;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  char in_CF;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  bVar5 = (byte)param_2;
  *param_1 = *param_1 + cVar6 + in_CF;
  uVar2 = (int)in_RAX + *in_RAX;
  uVar2 = uVar2 + *(int *)(ulonglong)uVar2;
  pbVar3 = (byte *)(ulonglong)uVar2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (char)uVar2;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)uVar2 + CARRY1(bVar1,unaff_SPL);
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar5;
  if (*pbVar3 != 0) {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
    pcVar4 = (char *)((ulonglong)uVar2 ^ 0x12);
    *pcVar4 = *pcVar4 + (char)pcVar4;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_1 = *param_1 + cVar6 + CARRY1(bVar1,bVar5);
  uVar2 = uVar2 + *(int *)pbVar3 + *(int *)(ulonglong)(uVar2 + *(int *)pbVar3);
  pcVar4 = (char *)(ulonglong)uVar2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (char)uVar2;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar4 = *pcVar4 + (char)uVar2;
  *pcVar4 = *pcVar4 + bVar5;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) ^ uVar2;
  *param_1 = *param_1 + unaff_BH;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) ^ uVar2;
  pcVar4[0x21004a03] = pcVar4[0x21004a03] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

