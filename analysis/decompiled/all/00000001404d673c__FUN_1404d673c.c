// Function: FUN_1404d673c
// Addr: 1404d673c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d673c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int in_EAX;
  undefined4 in_register_00000004;
  byte bVar4;
  char cVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  char *unaff_RDI;
  bool in_OF;
  byte abStackX_8 [32];
  
  bVar4 = (byte)param_2;
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar5 = (char)((ulonglong)param_2 >> 8) + *unaff_RDI;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar5,bVar4)) +
                   CONCAT71(unaff_00000019,unaff_BL) * 2);
  *pcVar1 = *pcVar1 + cVar5;
  *param_1 = *param_1 + unaff_BL;
  pbVar2 = abStackX_8 + unaff_RSI;
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar4;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       (*(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX) - (uint)CARRY1(bVar3,bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

