// Function: FUN_1404d6fb4
// Addr: 1404d6fb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6fb4(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  undefined4 in_EAX;
  uint uVar5;
  undefined4 in_register_00000004;
  char cVar6;
  byte *unaff_RBX;
  longlong unaff_RBP;
  uint uVar7;
  char *unaff_RSI;
  char unaff_R12B;
  
  cVar6 = (char)((ulonglong)param_1 >> 8);
  puVar2 = (uint *)(unaff_RSI + 1);
  cVar3 = *unaff_RSI;
  uVar5 = CONCAT31((int3)((uint)in_EAX >> 8),cVar3);
  uVar7 = (uint)puVar2;
  *puVar2 = *puVar2 ^ uVar7;
  unaff_RSI[unaff_RBP * 2 + 0x21004e] =
       unaff_RSI[unaff_RBP * 2 + 0x21004e] + (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar3;
  *puVar2 = *puVar2 ^ uVar7;
  pcVar1 = (char *)(param_1 + 0x6eb40036 + (longlong)puVar2);
  *pcVar1 = *pcVar1 + cVar6;
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar5) + -0x64ffc9cf);
  *pcVar1 = *pcVar1 + cVar3;
  *puVar2 = *puVar2 ^ uVar7;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar5) + 0x1004d6e);
  *pcVar1 = *pcVar1 + cVar6;
  puVar2 = (uint *)(CONCAT44(in_register_00000004,uVar5) + CONCAT44(in_register_00000004,uVar5));
  *puVar2 = *puVar2 | uVar5;
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | (uint)param_2;
  bVar4 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX << 1 | (char)bVar4 < '\0';
  if ((char)bVar4 < '\0' == (char)*unaff_RBX < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 - (char)param_1;
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar6;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

