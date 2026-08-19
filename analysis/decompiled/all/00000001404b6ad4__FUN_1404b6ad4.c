// Function: FUN_1404b6ad4
// Addr: 1404b6ad4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6ad4(longlong param_1,uint *param_2,undefined8 param_3,byte *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  undefined7 uVar8;
  char *pcVar6;
  int *piVar7;
  char cVar9;
  char unaff_BH;
  uint unaff_ESI;
  char *unaff_RDI;
  char in_ZF;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX;
  if (param_1 + -1 == 0 || in_ZF != '\0') {
    *param_4 = *param_4;
    *in_RAX = *in_RAX + cVar3;
    uRam69e0001ba582001b = SUB84(in_RAX,0);
    *param_4 = *param_4;
    *in_RAX = *in_RAX + cVar3;
    cVar3 = cVar3 + (char)((ulonglong)in_RAX >> 8);
    uRam69d0001ba3f9001b = (undefined4)CONCAT71(uVar8,cVar3);
    *param_4 = *param_4 + cVar3;
    *(byte *)param_2 = (byte)*param_2 + (char)(param_1 + -1) + unaff_BH;
    uVar5 = ((uint)CONCAT71(uVar8,cVar3) | 5) + 0x3600470;
    *(byte *)param_2 = (byte)*param_2 ^ (byte)uVar5;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (byte)uVar5;
    *param_2 = *param_2 & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + cVar3;
  *(char *)((ulonglong)in_RAX ^ 0xe) = *(char *)((ulonglong)in_RAX ^ 0xe) + cVar9;
  puVar1 = param_2 + -0x14;
  uVar5 = *puVar1;
  *(byte *)puVar1 = (byte)*puVar1 + 0x1b;
  uVar5 = ((int)(int *)CONCAT71(uVar8,0x1b) - *(int *)CONCAT71(uVar8,0x1b)) -
          (uint)(0xe4 < (byte)uVar5);
  pcVar6 = (char *)(ulonglong)uVar5;
  if (-1 < (int)uVar5) {
    *param_4 = *param_4;
    *pcVar6 = *pcVar6 + (char)uVar5;
    *pcVar6 = *pcVar6 + cVar9;
    piVar7 = (int *)CONCAT71((uint7)(uint3)(uVar5 >> 8),0x1b);
    puVar1 = param_2 + -0x14;
    uVar5 = *puVar1;
    *(byte *)puVar1 = (byte)*puVar1 + 0x1b;
    uVar5 = ((int)piVar7 - *piVar7) - (uint)(0xe4 < (byte)uVar5);
    if (-1 < (int)uVar5) {
      bVar2 = *param_4;
      bVar4 = (byte)uVar5;
      *param_4 = *param_4 + bVar4;
      *unaff_RDI = *unaff_RDI + bVar4 + CARRY1(bVar2,bVar4);
      *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)param_2;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

