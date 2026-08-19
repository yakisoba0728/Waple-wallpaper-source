// Function: FUN_1404cb6fc
// Addr: 1404cb6fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb6fc(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *in_RAX;
  char *pcVar5;
  char unaff_BL;
  char unaff_BH;
  uint *unaff_RDI;
  uint *puVar4;
  undefined6 uVar6;
  
  uVar2 = (uint)in_RAX ^ *in_RAX;
  *unaff_RDI = uVar2;
  param_1 = param_1 + -1;
  if (param_1 == 0 || uVar2 != 0) {
    cVar1 = (char)uVar2 + unaff_BH;
    uVar3 = CONCAT31((int3)(uVar2 >> 8),cVar1);
    puVar4 = (uint *)(ulonglong)uVar3;
    uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
    pcVar5 = (char *)CONCAT62(uVar6,CONCAT11(0x4c,(char)param_1));
    *pcVar5 = *pcVar5 + (char)(uVar2 >> 8);
    *(char *)puVar4 = (char)*puVar4 + cVar1;
    *(char *)((longlong)puVar4 + -0x1f) =
         *(char *)((longlong)puVar4 + -0x1f) + (char)((ulonglong)param_2 >> 8);
    uVar3 = uVar3 ^ *puVar4;
    in((short)param_2);
    pcVar5 = (char *)CONCAT62(uVar6,CONCAT11(0x4c,(char)param_1));
    *pcVar5 = *pcVar5 + ((byte)(uVar3 >> 8) ^ (byte)((uint)*(undefined4 *)(ulonglong)uVar3 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + unaff_BL;
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

