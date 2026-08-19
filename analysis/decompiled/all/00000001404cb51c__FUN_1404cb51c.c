// Function: FUN_1404cb51c
// Addr: 1404cb51c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb51c(char *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  char *pcVar3;
  char cVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  char unaff_R12B;
  
  cVar4 = (char)param_2;
  uVar2 = (uint)in_RAX ^ *in_RAX;
  cVar1 = (char)uVar2 + 'L';
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar4;
  in(0x33);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)((ulonglong)param_2 >> 8);
  in(0x33);
  *(char *)(unaff_RSI * 4) = *(char *)(unaff_RSI * 4) + unaff_BL;
  *param_1 = *param_1 + param_3;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar4;
  uRamfffffffffffffff8 = 0;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

