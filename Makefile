.PHONY: clean All

All:
	@echo "----------Building project:[ Assignment1_3_1 - Debug ]----------"
	@cd "Assignment1_3" && "$(MAKE)" -f  "Assignment1_3_1.mk"
clean:
	@echo "----------Cleaning project:[ Assignment1_3_1 - Debug ]----------"
	@cd "Assignment1_3" && "$(MAKE)" -f  "Assignment1_3_1.mk" clean
