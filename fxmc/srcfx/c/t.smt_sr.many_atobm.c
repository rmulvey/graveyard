T_b(ws);
T_b("/* ");
T_b(te_set->module);
T_b(te_set->clear);
T_b("( ");
T_b(te_select_related->result_var);
T_b(" ); */");
T_b("\n");
T_b(ws);
T_b("if ( 0 != ");
T_b(te_lnk->left);
T_b(" ) {");
T_b("\n");
T_b(ws);
T_b("  ");
T_b(te_set->module);
T_b(te_set->copy);
T_b("( ");
T_b(te_select_related->result_var);
T_b(", &");
T_b(te_lnk->left);
T_b("->");
T_b(te_lnk->linkage);
T_b(" );");
T_b("\n");
T_b(ws);
T_b("}");
T_b("\n");
