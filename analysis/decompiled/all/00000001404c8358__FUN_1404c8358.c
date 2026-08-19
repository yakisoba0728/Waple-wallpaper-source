// Function: FUN_1404c8358
// Addr: 1404c8358
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c8371) overlaps instruction at (ram,0x0001404c836f)
    */

void FUN_1404c8358(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  char in_AL;
  byte bVar4;
  char cVar5;
  byte in_AH;
  byte bVar6;
  char cVar7;
  undefined2 in_register_00000002;
  undefined2 uVar8;
  undefined4 in_register_00000004;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R12B;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & (uint)param_1;
  bVar4 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  bVar6 = in_AH | bVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar4)))
       + bVar4;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar4)))
      == '\0') {
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar4))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar4))
                          ) ^ CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar4));
    uVar2 = rdtsc();
    uVar3 = (uint)uVar2;
    pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar3) + -0x7e);
    cVar5 = (char)((ulonglong)uVar2 >> 0x28);
    *pcVar1 = *pcVar1 + cVar5;
    *param_1 = *param_1 + unaff_R12B;
    *(char *)CONCAT44(in_register_00000004,uVar3) =
         *(char *)CONCAT44(in_register_00000004,uVar3) + (char)uVar2;
    *(char *)(unaff_RBP + 0xf) = *(char *)(unaff_RBP + 0xf) + cVar5;
    *(uint *)CONCAT44(in_register_00000004,uVar3) =
         *(uint *)CONCAT44(in_register_00000004,uVar3) ^ uVar3;
    uVar2 = rdtsc();
    cVar5 = (char)uVar2;
    cVar7 = (char)((ulonglong)uVar2 >> 8);
    uVar8 = (undefined2)((ulonglong)uVar2 >> 0x10);
    pcVar1 = (char *)(CONCAT44(in_register_00000004,(int)uVar2) + -0x7e);
    *pcVar1 = *pcVar1 + (char)((ulonglong)uVar2 >> 0x28);
  }
  else {
    uVar2 = rdtsc();
    cVar5 = (char)uVar2;
    cVar7 = (char)((ulonglong)uVar2 >> 8);
    uVar8 = (undefined2)((ulonglong)uVar2 >> 0x10);
    param_1[unaff_RDI + -0x7d8fffcf] =
         param_1[unaff_RDI + -0x7d8fffcf] + (char)((ulonglong)param_1 >> 8);
  }
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,cVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,cVar5))) + cVar5;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,cVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,cVar5))) + cVar7;
  uVar2 = rdtsc();
  *(char *)(unaff_RBP + 0xf) = *(char *)(unaff_RBP + 0xf) + (char)((ulonglong)uVar2 >> 0x28);
  uVar3 = (uint)uVar2;
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) ^ uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

