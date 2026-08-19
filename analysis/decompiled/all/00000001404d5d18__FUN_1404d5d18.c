// Function: FUN_1404d5d18
// Addr: 1404d5d18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5d18(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  uint3 uVar1;
  char cVar3;
  int in_EAX;
  char *pcVar2;
  char cVar4;
  char *unaff_RBX;
  char in_R11B;
  char unaff_R12B;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  uVar1 = (uint3)((uint)(in_EAX + 0x10000b64) >> 8);
  cVar3 = (char)((uint)(in_EAX + 0x10000b64) >> 8);
  *unaff_RBX = *unaff_RBX + cVar3;
  pcVar2 = (char *)CONCAT71((uint7)uVar1,0x38);
  *pcVar2 = *pcVar2 + cVar4;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar2 = *pcVar2 + '8';
  *pcVar2 = *pcVar2 + param_2;
  *unaff_RBX = *unaff_RBX + cVar3;
  pcVar2 = (char *)CONCAT71((uint7)uVar1,0x38);
  *pcVar2 = *pcVar2 + cVar4;
  *param_4 = *param_4 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

